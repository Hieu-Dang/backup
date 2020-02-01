-- phpMyAdmin SQL Dump
-- version 4.0.4
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Jan 11, 2020 at 04:11 AM
-- Server version: 5.5.32
-- PHP Version: 5.4.16

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `nha_cungcap`
--
CREATE DATABASE IF NOT EXISTS `nha_cungcap` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `nha_cungcap`;

-- --------------------------------------------------------

--
-- Table structure for table `dangkycungcap`
--

CREATE TABLE IF NOT EXISTS `dangkycungcap` (
  `MaDKCC` varchar(5) NOT NULL,
  `MaNhaCC` varchar(10) NOT NULL,
  `MaLoaiDV` varchar(10) NOT NULL,
  `DongXE` varchar(10) DEFAULT NULL,
  `MaMP` varchar(5) DEFAULT NULL,
  `NgayBatDauCungCap` varchar(12) DEFAULT NULL,
  `NgayKetThucCungCap` varchar(12) DEFAULT NULL,
  `SoLuongXeDangKy` int(11) DEFAULT NULL,
  PRIMARY KEY (`MaDKCC`),
  KEY `MaNhaCC` (`MaNhaCC`),
  KEY `MaLoaiDV` (`MaLoaiDV`),
  KEY `DongXE` (`DongXE`),
  KEY `MaMP` (`MaMP`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `dongxe`
--

CREATE TABLE IF NOT EXISTS `dongxe` (
  `DongXe` varchar(10) NOT NULL,
  `HangXe` varchar(10) DEFAULT NULL,
  `SoChoNgoi` varchar(2) DEFAULT NULL,
  PRIMARY KEY (`DongXe`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `loaidichvu`
--

CREATE TABLE IF NOT EXISTS `loaidichvu` (
  `MaLoaiDV` varchar(10) NOT NULL,
  `TenLoaiDV` varchar(35) DEFAULT NULL,
  PRIMARY KEY (`MaLoaiDV`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `mucphi`
--

CREATE TABLE IF NOT EXISTS `mucphi` (
  `MaMP` varchar(10) NOT NULL,
  `DonGia` varchar(10) DEFAULT NULL,
  `MoTa` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`MaMP`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `nhacungcap`
--

CREATE TABLE IF NOT EXISTS `nhacungcap` (
  `MaNhaCC` varchar(10) NOT NULL,
  `TenNhaCC` varchar(30) DEFAULT NULL,
  `DiaChi` varchar(30) DEFAULT NULL,
  `SoDT` char(12) DEFAULT NULL,
  `MaSoThue` varchar(5) DEFAULT NULL,
  PRIMARY KEY (`MaNhaCC`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `dangkycungcap`
--
ALTER TABLE `dangkycungcap`
  ADD CONSTRAINT `dangkycungcap_ibfk_1` FOREIGN KEY (`MaNhaCC`) REFERENCES `nhacungcap` (`MaNhaCC`),
  ADD CONSTRAINT `dangkycungcap_ibfk_2` FOREIGN KEY (`MaLoaiDV`) REFERENCES `loaidichvu` (`MaLoaiDV`),
  ADD CONSTRAINT `dangkycungcap_ibfk_3` FOREIGN KEY (`DongXE`) REFERENCES `dongxe` (`DongXe`),
  ADD CONSTRAINT `dangkycungcap_ibfk_4` FOREIGN KEY (`MaMP`) REFERENCES `mucphi` (`MaMP`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

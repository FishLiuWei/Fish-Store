﻿//------------------------------------------------------------------------------
// <autogenerated>
//     This code was generated by a CodeSmith Template.
//
//     DO NOT MODIFY contents of this file. Changes to this
//     file will be lost if the code is regenerated.

// </autogenerated>
//------------------------------------------------------------------------------
using System;
using System.Collections.Generic;
using System.Text;

namespace OpenAuth.Repository.Domain
{
    /// <summary>
	/// 供应商信息表
	/// </summary>
    public partial class Orders : Entity
    {
        public Orders()
        {
            this.TextbookName = string.Empty;
            this.OutputName = string.Empty;
            this.Author = string.Empty;
            this.MajorFor = string.Empty;
            this.BookUnit = string.Empty;
            this.CreateBy = string.Empty;
            this.TextbookNum = 0;
            this.Remarks = string.Empty;
            this.OrderDate = Convert.ToDateTime("1900-01-01");
            this.FRIDNum = string.Empty;
            this.ForClass = string.Empty;
        }
        /// <summary>
        /// 教材名
        /// </summary>
        public string TextbookName { get; set; }
        /// <summary>
        /// 出版社
        /// </summary>
        public string OutputName { get; set; }
        /// <summary>
        /// 作者
        /// </summary>
        public string Author { get; set; }
        /// <summary>
        /// 适用专业
        /// </summary>
        public string MajorFor { get; set; }
        /// <summary>
        /// 订书单位
        /// </summary>
        public string BookUnit { get; set; }
        /// <summary>
        /// 经办人
        /// </summary>
        public string CreateBy { get; set; }
        /// <summary>
        /// 教材数量
        /// </summary>
        public int? TextbookNum { get; set; }
        /// <summary>
        /// 使用说明
        /// </summary>
        public string Remarks { get; set; }
        /// <summary>
        /// 订购时间
        /// </summary>
        public DateTime OrderDate { get; set; }
        /// <summary>
        /// RFID码
        /// </summary>
        public string FRIDNum { get; set; }
        /// <summary>
        /// 适用班级
        /// </summary>
        public string ForClass { get; set; }
    }
}
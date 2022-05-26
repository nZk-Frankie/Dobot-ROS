; Auto-generated. Do not edit!


(cl:in-package dobot-msg)


;//! \htmlinclude PTPCommand.msg.html

(cl:defclass <PTPCommand> (roslisp-msg-protocol:ros-message)
  ((ptpMode
    :reader ptpMode
    :initarg :ptpMode
    :type cl:fixnum
    :initform 0)
   (x
    :reader x
    :initarg :x
    :type cl:float
    :initform 0.0)
   (y
    :reader y
    :initarg :y
    :type cl:float
    :initform 0.0)
   (z
    :reader z
    :initarg :z
    :type cl:float
    :initform 0.0)
   (r
    :reader r
    :initarg :r
    :type cl:float
    :initform 0.0))
)

(cl:defclass PTPCommand (<PTPCommand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PTPCommand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PTPCommand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dobot-msg:<PTPCommand> is deprecated: use dobot-msg:PTPCommand instead.")))

(cl:ensure-generic-function 'ptpMode-val :lambda-list '(m))
(cl:defmethod ptpMode-val ((m <PTPCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:ptpMode-val is deprecated.  Use dobot-msg:ptpMode instead.")
  (ptpMode m))

(cl:ensure-generic-function 'x-val :lambda-list '(m))
(cl:defmethod x-val ((m <PTPCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:x-val is deprecated.  Use dobot-msg:x instead.")
  (x m))

(cl:ensure-generic-function 'y-val :lambda-list '(m))
(cl:defmethod y-val ((m <PTPCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:y-val is deprecated.  Use dobot-msg:y instead.")
  (y m))

(cl:ensure-generic-function 'z-val :lambda-list '(m))
(cl:defmethod z-val ((m <PTPCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:z-val is deprecated.  Use dobot-msg:z instead.")
  (z m))

(cl:ensure-generic-function 'r-val :lambda-list '(m))
(cl:defmethod r-val ((m <PTPCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dobot-msg:r-val is deprecated.  Use dobot-msg:r instead.")
  (r m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PTPCommand>) ostream)
  "Serializes a message object of type '<PTPCommand>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ptpMode)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'z))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'r))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PTPCommand>) istream)
  "Deserializes a message object of type '<PTPCommand>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ptpMode)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'x) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'y) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'z) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'r) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PTPCommand>)))
  "Returns string type for a message object of type '<PTPCommand>"
  "dobot/PTPCommand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PTPCommand)))
  "Returns string type for a message object of type 'PTPCommand"
  "dobot/PTPCommand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PTPCommand>)))
  "Returns md5sum for a message object of type '<PTPCommand>"
  "fb740859230cd62a75096d59fd085a9e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PTPCommand)))
  "Returns md5sum for a message object of type 'PTPCommand"
  "fb740859230cd62a75096d59fd085a9e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PTPCommand>)))
  "Returns full string definition for message of type '<PTPCommand>"
  (cl:format cl:nil "uint8 ptpMode~%float32 x~%float32 y~%float32 z~%float32 r~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PTPCommand)))
  "Returns full string definition for message of type 'PTPCommand"
  (cl:format cl:nil "uint8 ptpMode~%float32 x~%float32 y~%float32 z~%float32 r~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PTPCommand>))
  (cl:+ 0
     1
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PTPCommand>))
  "Converts a ROS message object to a list"
  (cl:list 'PTPCommand
    (cl:cons ':ptpMode (ptpMode msg))
    (cl:cons ':x (x msg))
    (cl:cons ':y (y msg))
    (cl:cons ':z (z msg))
    (cl:cons ':r (r msg))
))

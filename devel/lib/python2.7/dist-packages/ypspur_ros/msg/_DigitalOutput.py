# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ypspur_ros/DigitalOutput.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy

class DigitalOutput(genpy.Message):
  _md5sum = "019a9291acebccdd82910cc6e11634c7"
  _type = "ypspur_ros/DigitalOutput"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint8 output
duration toggle_time

uint8 HIGH_IMPEDANCE=0
uint8 LOW=1
uint8 HIGH=2
uint8 PULL_UP=3
uint8 PULL_DOWN=4
"""
  # Pseudo-constants
  HIGH_IMPEDANCE = 0
  LOW = 1
  HIGH = 2
  PULL_UP = 3
  PULL_DOWN = 4

  __slots__ = ['output','toggle_time']
  _slot_types = ['uint8','duration']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       output,toggle_time

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DigitalOutput, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.output is None:
        self.output = 0
      if self.toggle_time is None:
        self.toggle_time = genpy.Duration()
    else:
      self.output = 0
      self.toggle_time = genpy.Duration()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_B2i.pack(_x.output, _x.toggle_time.secs, _x.toggle_time.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.toggle_time is None:
        self.toggle_time = genpy.Duration()
      end = 0
      _x = self
      start = end
      end += 9
      (_x.output, _x.toggle_time.secs, _x.toggle_time.nsecs,) = _struct_B2i.unpack(str[start:end])
      self.toggle_time.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_B2i.pack(_x.output, _x.toggle_time.secs, _x.toggle_time.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.toggle_time is None:
        self.toggle_time = genpy.Duration()
      end = 0
      _x = self
      start = end
      end += 9
      (_x.output, _x.toggle_time.secs, _x.toggle_time.nsecs,) = _struct_B2i.unpack(str[start:end])
      self.toggle_time.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_B2i = struct.Struct("<B2i")

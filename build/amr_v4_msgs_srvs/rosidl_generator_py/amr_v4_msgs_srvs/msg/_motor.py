# generated from rosidl_generator_py/resource/_idl.py.em
# with input from amr_v4_msgs_srvs:msg/Motor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Motor(type):
    """Metaclass of message 'Motor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('amr_v4_msgs_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'amr_v4_msgs_srvs.msg.Motor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Motor(metaclass=Metaclass_Motor):
    """Message class 'Motor'."""

    __slots__ = [
        '_output_current_right',
        '_error_right',
        '_output_current_left',
        '_error_left',
        '_output_current_pin',
        '_error_pin',
        '_target_pos_high',
        '_target_pos_low',
        '_current_pos',
    ]

    _fields_and_field_types = {
        'output_current_right': 'string',
        'error_right': 'string',
        'output_current_left': 'string',
        'error_left': 'string',
        'output_current_pin': 'string',
        'error_pin': 'string',
        'target_pos_high': 'double',
        'target_pos_low': 'double',
        'current_pos': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.output_current_right = kwargs.get('output_current_right', str())
        self.error_right = kwargs.get('error_right', str())
        self.output_current_left = kwargs.get('output_current_left', str())
        self.error_left = kwargs.get('error_left', str())
        self.output_current_pin = kwargs.get('output_current_pin', str())
        self.error_pin = kwargs.get('error_pin', str())
        self.target_pos_high = kwargs.get('target_pos_high', float())
        self.target_pos_low = kwargs.get('target_pos_low', float())
        self.current_pos = kwargs.get('current_pos', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.output_current_right != other.output_current_right:
            return False
        if self.error_right != other.error_right:
            return False
        if self.output_current_left != other.output_current_left:
            return False
        if self.error_left != other.error_left:
            return False
        if self.output_current_pin != other.output_current_pin:
            return False
        if self.error_pin != other.error_pin:
            return False
        if self.target_pos_high != other.target_pos_high:
            return False
        if self.target_pos_low != other.target_pos_low:
            return False
        if self.current_pos != other.current_pos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def output_current_right(self):
        """Message field 'output_current_right'."""
        return self._output_current_right

    @output_current_right.setter
    def output_current_right(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'output_current_right' field must be of type 'str'"
        self._output_current_right = value

    @property
    def error_right(self):
        """Message field 'error_right'."""
        return self._error_right

    @error_right.setter
    def error_right(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_right' field must be of type 'str'"
        self._error_right = value

    @property
    def output_current_left(self):
        """Message field 'output_current_left'."""
        return self._output_current_left

    @output_current_left.setter
    def output_current_left(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'output_current_left' field must be of type 'str'"
        self._output_current_left = value

    @property
    def error_left(self):
        """Message field 'error_left'."""
        return self._error_left

    @error_left.setter
    def error_left(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_left' field must be of type 'str'"
        self._error_left = value

    @property
    def output_current_pin(self):
        """Message field 'output_current_pin'."""
        return self._output_current_pin

    @output_current_pin.setter
    def output_current_pin(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'output_current_pin' field must be of type 'str'"
        self._output_current_pin = value

    @property
    def error_pin(self):
        """Message field 'error_pin'."""
        return self._error_pin

    @error_pin.setter
    def error_pin(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_pin' field must be of type 'str'"
        self._error_pin = value

    @property
    def target_pos_high(self):
        """Message field 'target_pos_high'."""
        return self._target_pos_high

    @target_pos_high.setter
    def target_pos_high(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_pos_high' field must be of type 'float'"
        self._target_pos_high = value

    @property
    def target_pos_low(self):
        """Message field 'target_pos_low'."""
        return self._target_pos_low

    @target_pos_low.setter
    def target_pos_low(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_pos_low' field must be of type 'float'"
        self._target_pos_low = value

    @property
    def current_pos(self):
        """Message field 'current_pos'."""
        return self._current_pos

    @current_pos.setter
    def current_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_pos' field must be of type 'float'"
        self._current_pos = value

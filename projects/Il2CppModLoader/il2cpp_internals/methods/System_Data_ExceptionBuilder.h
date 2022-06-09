#include <interception_macros.h>

namespace app::methods::System_Data::ExceptionBuilder {
    IL2CPP_REGISTER_METHOD(0x01F4D2B0, void, TraceException, (app::String * trace, app::Exception * e));
    IL2CPP_REGISTER_METHOD(0x01F4D380, app::Exception *, TraceExceptionAsReturnValue, (app::Exception * e));
    IL2CPP_REGISTER_METHOD(0x01F4D410, app::Exception *, TraceExceptionForCapture, (app::Exception * e));
    IL2CPP_REGISTER_METHOD(0x01F4D4A0, app::Exception *, TraceExceptionWithoutRethrow, (app::Exception * e));
    IL2CPP_REGISTER_METHOD(0x01F4D530, app::Exception *, _Argument_1, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4D690, app::Exception *, _Argument_2, (app::String * param_name, app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4D7F0, app::Exception *, _Argument_3, (app::String * error, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x01F4D950, app::Exception *, _ArgumentNull, (app::String * param_name, app::String * msg));
    IL2CPP_REGISTER_METHOD(0x01F4DAB0, app::Exception *, _ArgumentOutOfRange, (app::String * param_name, app::String * msg));
    IL2CPP_REGISTER_METHOD(0x01F4DC10, app::Exception *, _IndexOutOfRange, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4DD70, app::Exception *, _InvalidOperation, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4DED0, app::Exception *, _InvalidEnumArgumentException_1, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4E030, void, ThrowDataException, (app::String * error, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHODINFO(0x04739CF0, ExceptionBuilder_ThrowDataException__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01F4E0A0, app::Exception *, _Data, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4E200, app::Exception *, _Constraint, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4E360, app::Exception *, _InvalidConstraint, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4E4C0, app::Exception *, _DeletedRowInaccessible, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4E620, app::Exception *, _DuplicateName, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4E780, app::Exception *, _InRowChangingEvent, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4E8E0, app::Exception *, _NoNullAllowed, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4EA40, app::Exception *, _ReadOnly, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4EBA0, app::Exception *, _RowNotInTable, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4ED00, app::Exception *, _VersionNotFound, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4EE60, app::Exception *, ArgumentNull, (app::String * param_name));
    IL2CPP_REGISTER_METHOD(0x01F4F030, app::Exception *, ArgumentOutOfRange, (app::String * param_name));
    IL2CPP_REGISTER_METHOD(0x01F4F0C0, app::Exception *, BadObjectPropertyAccess, (app::String * error));
    IL2CPP_REGISTER_METHOD(0x01F4F150, app::Exception *, ArgumentContainsNull, (app::String * param_name));
    IL2CPP_REGISTER_METHOD(0x01F4F320, app::Exception *, CannotModifyCollection, ());
    IL2CPP_REGISTER_METHOD(0x01F4F3A0, app::Exception *, CaseInsensitiveNameConflict, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F4F430, app::Exception *, NamespaceNameConflict, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F4F4C0, app::Exception *, InvalidOffsetLength, ());
    IL2CPP_REGISTER_METHOD(0x01F4F540, app::Exception *, ColumnNotInTheTable, (app::String * column, app::String * table));
    IL2CPP_REGISTER_METHOD(0x01F4F5E0, app::Exception *, ColumnNotInAnyTable, ());
    IL2CPP_REGISTER_METHOD(0x01F4F660, app::Exception *, ColumnOutOfRange_1, (int32_t index));
    IL2CPP_REGISTER_METHOD(0x01F4F730, app::Exception *, ColumnOutOfRange_2, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F4F7C0, app::Exception *, CannotAddColumn1, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F4F850, app::Exception *, CannotAddColumn2, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F4F8E0, app::Exception *, CannotAddColumn3, ());
    IL2CPP_REGISTER_METHOD(0x01F4F960, app::Exception *, CannotAddColumn4, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F4F9F0, app::Exception *, CannotAddDuplicate, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F4FA80, app::Exception *, CannotAddDuplicate2, (app::String * table));
    IL2CPP_REGISTER_METHOD(0x01F4FB10, app::Exception *, CannotAddDuplicate3, (app::String * table));
    IL2CPP_REGISTER_METHOD(0x01F4FBA0, app::Exception *, CannotRemoveColumn, ());
    IL2CPP_REGISTER_METHOD(0x01F4FC20, app::Exception *, CannotRemovePrimaryKey, ());
    IL2CPP_REGISTER_METHOD(0x01F4FCA0, app::Exception *, CannotRemoveChildKey, (app::String * relation));
    IL2CPP_REGISTER_METHOD(0x01F4FD30, app::Exception *, CannotRemoveConstraint, (app::String * constraint, app::String * table));
    IL2CPP_REGISTER_METHOD(0x01F4FDD0, app::Exception *, CannotRemoveExpression, (app::String * column, app::String * expression));
    IL2CPP_REGISTER_METHOD(0x01F4FE70, app::Exception *, AddPrimaryKeyConstraint, ());
    IL2CPP_REGISTER_METHOD(0x01F4FEF0, app::Exception *, NoConstraintName, ());
    IL2CPP_REGISTER_METHOD(0x01F4FF70, app::Exception *, ConstraintViolation_1, (app::String * constraint));
    IL2CPP_REGISTER_METHOD(0x01F50000, app::String *, KeysToString, (app::Object__Array * keys));
    IL2CPP_REGISTER_METHOD(0x01F50140, app::String *, UniqueConstraintViolationText, (app::DataColumn__Array * columns, app::Object__Array * values));
    IL2CPP_REGISTER_METHOD(0x01F50310, app::Exception *, ConstraintViolation_2, (app::DataColumn__Array * columns, app::Object__Array * values));
    IL2CPP_REGISTER_METHOD(0x01F50330, app::Exception *, ConstraintOutOfRange, (int32_t index));
    IL2CPP_REGISTER_METHOD(0x01F50400, app::Exception *, DuplicateConstraint, (app::String * constraint));
    IL2CPP_REGISTER_METHOD(0x01F50490, app::Exception *, DuplicateConstraintName, (app::String * constraint));
    IL2CPP_REGISTER_METHOD(0x01F50520, app::Exception *, NeededForForeignKeyConstraint, (app::UniqueConstraint * key, app::ForeignKeyConstraint * fk));
    IL2CPP_REGISTER_METHOD(0x01F50600, app::Exception *, UniqueConstraintViolation, ());
    IL2CPP_REGISTER_METHOD(0x01F50680, app::Exception *, ConstraintForeignTable, ());
    IL2CPP_REGISTER_METHOD(0x01F50700, app::Exception *, ConstraintParentValues, ());
    IL2CPP_REGISTER_METHOD(0x01F50780, app::Exception *, ConstraintAddFailed, (app::DataTable * table));
    IL2CPP_REGISTER_METHOD(0x01F50820, app::Exception *, ConstraintRemoveFailed, ());
    IL2CPP_REGISTER_METHOD(0x01F508A0, app::Exception *, FailedCascadeDelete, (app::String * constraint));
    IL2CPP_REGISTER_METHOD(0x01F50930, app::Exception *, FailedCascadeUpdate, (app::String * constraint));
    IL2CPP_REGISTER_METHOD(0x01F509C0, app::Exception *, FailedClearParentTable, (app::String * table, app::String * constraint, app::String * child_table));
    IL2CPP_REGISTER_METHOD(0x01F50A80, app::Exception *, ForeignKeyViolation, (app::String * constraint, app::Object__Array * keys));
    IL2CPP_REGISTER_METHOD(0x01F50B30, app::Exception *, RemoveParentRow, (app::ForeignKeyConstraint * constraint));
    IL2CPP_REGISTER_METHOD(0x01F50BE0, app::String *, MaxLengthViolationText, (app::String * column_name));
    IL2CPP_REGISTER_METHOD(0x01F50C70, app::String *, NotAllowDBNullViolationText, (app::String * column_name));
    IL2CPP_REGISTER_METHOD(0x01F50D00, app::Exception *, CantAddConstraintToMultipleNestedTable, (app::String * table_name));
    IL2CPP_REGISTER_METHOD(0x01F50D90, app::Exception *, AutoIncrementAndExpression, ());
    IL2CPP_REGISTER_METHOD(0x01F50E10, app::Exception *, AutoIncrementAndDefaultValue, ());
    IL2CPP_REGISTER_METHOD(0x01F50E90, app::Exception *, AutoIncrementSeed, ());
    IL2CPP_REGISTER_METHOD(0x01F50F10, app::Exception *, CantChangeDataType, ());
    IL2CPP_REGISTER_METHOD(0x01F50F90, app::Exception *, NullDataType, ());
    IL2CPP_REGISTER_METHOD(0x01F51010, app::Exception *, ColumnNameRequired, ());
    IL2CPP_REGISTER_METHOD(0x01F51090, app::Exception *, DefaultValueAndAutoIncrement, ());
    IL2CPP_REGISTER_METHOD(0x01F51110, app::Exception *, DefaultValueDataType, (app::String * column, app::Type * default_type, app::Type * column_type, app::Exception * inner));
    IL2CPP_REGISTER_METHOD(0x01F51290, app::Exception *, DefaultValueColumnDataType, (app::String * column, app::Type * default_type, app::Type * column_type, app::Exception * inner));
    IL2CPP_REGISTER_METHOD(0x01F513A0, app::Exception *, ExpressionAndUnique, ());
    IL2CPP_REGISTER_METHOD(0x01F51420, app::Exception *, ExpressionAndReadOnly, ());
    IL2CPP_REGISTER_METHOD(0x01F514A0, app::Exception *, ExpressionAndConstraint, (app::DataColumn * column, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHOD(0x01F51570, app::Exception *, ExpressionInConstraint, (app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x01F51610, app::Exception *, ExpressionCircular, ());
    IL2CPP_REGISTER_METHOD(0x01F51690, app::Exception *, NonUniqueValues, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F51720, app::Exception *, NullKeyValues, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F517B0, app::Exception *, NullValues, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F51980, app::Exception *, ReadOnlyAndExpression, ());
    IL2CPP_REGISTER_METHOD(0x01F51A00, app::Exception *, ReadOnly, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F51A90, app::Exception *, UniqueAndExpression, ());
    IL2CPP_REGISTER_METHOD(0x01F51B10, app::Exception *, SetFailed_1, (app::Object * value, app::DataColumn * column, app::Type * type, app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x01F51C70, app::Exception *, CannotSetToNull, (app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x01F51D10, app::Exception *, LongerThanMaxLength, (app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x01F51DB0, app::Exception *, CannotSetMaxLength, (app::DataColumn * column, int32_t value));
    IL2CPP_REGISTER_METHOD(0x01F51EA0, app::Exception *, CannotSetMaxLength2, (app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x01F51F40, app::Exception *, CannotSetSimpleContentType, (app::String * column_name, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x01F51FE0, app::Exception *, CannotSetSimpleContent, (app::String * column_name, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x01F52080, app::Exception *, CannotChangeNamespace, (app::String * column_name));
    IL2CPP_REGISTER_METHOD(0x01F52110, app::Exception *, HasToBeStringType, (app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x01F521B0, app::Exception *, AutoIncrementCannotSetIfHasData, (app::String * type_name));
    IL2CPP_REGISTER_METHOD(0x01F52240, app::Exception *, INullableUDTwithoutStaticNull, (app::String * type_name));
    IL2CPP_REGISTER_METHOD(0x01F522D0, app::Exception *, IComparableNotImplemented, (app::String * type_name));
    IL2CPP_REGISTER_METHOD(0x01F52360, app::Exception *, UDTImplementsIChangeTrackingButnotIRevertible, (app::String * type_name));
    IL2CPP_REGISTER_METHOD(0x01F523F0, app::Exception *, InvalidDataColumnMapping, (app::Type * type));
    IL2CPP_REGISTER_METHOD(0x01F524A0, app::Exception *, CannotSetDateTimeModeForNonDateTimeColumns, ());
    IL2CPP_REGISTER_METHOD(0x01F52520, app::Exception *, InvalidDateTimeMode, (app::DataSetDateTime__Enum mode));
    IL2CPP_REGISTER_METHOD(0x01F525A0, app::Exception *, CantChangeDateTimeMode, (app::DataSetDateTime__Enum old_value, app::DataSetDateTime__Enum new_value));
    IL2CPP_REGISTER_METHOD(0x01F526A0, app::Exception *, ColumnTypeNotSupported, ());
    IL2CPP_REGISTER_METHOD(0x01F52740, app::Exception *, SetFailed_2, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F527D0, app::Exception *, SetRowStateFilter, ());
    IL2CPP_REGISTER_METHOD(0x01F52850, app::Exception *, CanNotUseDataViewManager, ());
    IL2CPP_REGISTER_METHOD(0x01F528D0, app::Exception *, CanNotSetTable, ());
    IL2CPP_REGISTER_METHOD(0x01F52950, app::Exception *, CanNotUse, ());
    IL2CPP_REGISTER_METHOD(0x01F529D0, app::Exception *, CanNotBindTable, ());
    IL2CPP_REGISTER_METHOD(0x01F52A50, app::Exception *, SetTable, ());
    IL2CPP_REGISTER_METHOD(0x01F52AD0, app::Exception *, SetIListObject, ());
    IL2CPP_REGISTER_METHOD(0x01F52B50, app::Exception *, AddNewNotAllowNull, ());
    IL2CPP_REGISTER_METHOD(0x01F52BD0, app::Exception *, NotOpen, ());
    IL2CPP_REGISTER_METHOD(0x01F52C50, app::Exception *, CreateChildView, ());
    IL2CPP_REGISTER_METHOD(0x01F52CD0, app::Exception *, CanNotDelete, ());
    IL2CPP_REGISTER_METHOD(0x01F52D50, app::Exception *, GetElementIndex, (int32_t index));
    IL2CPP_REGISTER_METHOD(0x01F52E20, app::Exception *, AddExternalObject, ());
    IL2CPP_REGISTER_METHOD(0x01F52EA0, app::Exception *, CanNotClear, ());
    IL2CPP_REGISTER_METHOD(0x01F52F20, app::Exception *, InsertExternalObject, ());
    IL2CPP_REGISTER_METHOD(0x01F52FA0, app::Exception *, RemoveExternalObject, ());
    IL2CPP_REGISTER_METHOD(0x01F53020, app::Exception *, ColumnToSortIsOutOfRange, (app::String * column));
    IL2CPP_REGISTER_METHOD(0x01F530B0, app::Exception *, KeyTableMismatch, ());
    IL2CPP_REGISTER_METHOD(0x01F53130, app::Exception *, KeyNoColumns, ());
    IL2CPP_REGISTER_METHOD(0x01F531B0, app::Exception *, KeyTooManyColumns, (int32_t cols));
    IL2CPP_REGISTER_METHOD(0x01F53280, app::Exception *, KeyDuplicateColumns, (app::String * column_name));
    IL2CPP_REGISTER_METHOD(0x01F53310, app::Exception *, RelationDataSetMismatch, ());
    IL2CPP_REGISTER_METHOD(0x01F53390, app::Exception *, ColumnsTypeMismatch, ());
    IL2CPP_REGISTER_METHOD(0x01F53410, app::Exception *, KeyLengthMismatch, ());
    IL2CPP_REGISTER_METHOD(0x01F53490, app::Exception *, KeyLengthZero, ());
    IL2CPP_REGISTER_METHOD(0x01F53510, app::Exception *, ForeignRelation, ());
    IL2CPP_REGISTER_METHOD(0x01F53590, app::Exception *, KeyColumnsIdentical, ());
    IL2CPP_REGISTER_METHOD(0x01F53610, app::Exception *, RelationForeignTable, (app::String * t1, app::String * t2));
    IL2CPP_REGISTER_METHOD(0x01F536B0, app::Exception *, GetParentRowTableMismatch, (app::String * t1, app::String * t2));
    IL2CPP_REGISTER_METHOD(0x01F53750, app::Exception *, SetParentRowTableMismatch, (app::String * t1, app::String * t2));
    IL2CPP_REGISTER_METHOD(0x01F537F0, app::Exception *, RelationForeignRow, ());
    IL2CPP_REGISTER_METHOD(0x01F53870, app::Exception *, RelationNestedReadOnly, ());
    IL2CPP_REGISTER_METHOD(0x01F538F0, app::Exception *, TableCantBeNestedInTwoTables, (app::String * table_name));
    IL2CPP_REGISTER_METHOD(0x01F53980, app::Exception *, LoopInNestedRelations, (app::String * table_name));
    IL2CPP_REGISTER_METHOD(0x01F53A10, app::Exception *, RelationDoesNotExist, ());
    IL2CPP_REGISTER_METHOD(0x01F53A90, app::Exception *, ParentOrChildColumnsDoNotHaveDataSet, ());
    IL2CPP_REGISTER_METHOD(0x01F53B10, app::Exception *, InValidNestedRelation, (app::String * child_table_name));
    IL2CPP_REGISTER_METHOD(0x01F53BA0, app::Exception *, InvalidParentNamespaceinNestedRelation, (app::String * child_table_name));
    IL2CPP_REGISTER_METHOD(0x01F53C30, app::Exception *, RowNotInTheDataSet, ());
    IL2CPP_REGISTER_METHOD(0x01F53CB0, app::Exception *, RowNotInTheTable, ());
    IL2CPP_REGISTER_METHOD(0x01F53D30, app::Exception *, EditInRowChanging, ());
    IL2CPP_REGISTER_METHOD(0x01F53DB0, app::Exception *, EndEditInRowChanging, ());
    IL2CPP_REGISTER_METHOD(0x01F53E30, app::Exception *, BeginEditInRowChanging, ());
    IL2CPP_REGISTER_METHOD(0x01F53EB0, app::Exception *, CancelEditInRowChanging, ());
    IL2CPP_REGISTER_METHOD(0x01F53F30, app::Exception *, DeleteInRowDeleting, ());
    IL2CPP_REGISTER_METHOD(0x01F53FB0, app::Exception *, ValueArrayLength, ());
    IL2CPP_REGISTER_METHOD(0x01F54030, app::Exception *, NoCurrentData, ());
    IL2CPP_REGISTER_METHOD(0x01F540B0, app::Exception *, NoOriginalData, ());
    IL2CPP_REGISTER_METHOD(0x01F54130, app::Exception *, NoProposedData, ());
    IL2CPP_REGISTER_METHOD(0x01F541B0, app::Exception *, RowRemovedFromTheTable, ());
    IL2CPP_REGISTER_METHOD(0x01F54230, app::Exception *, DeletedRowInaccessible, ());
    IL2CPP_REGISTER_METHOD(0x01F542B0, app::Exception *, RowAlreadyDeleted, ());
    IL2CPP_REGISTER_METHOD(0x01F54330, app::Exception *, RowEmpty, ());
    IL2CPP_REGISTER_METHOD(0x01F543B0, app::Exception *, InvalidRowVersion, ());
    IL2CPP_REGISTER_METHOD(0x01F54430, app::Exception *, RowOutOfRange, (int32_t index));
    IL2CPP_REGISTER_METHOD(0x01F54500, app::Exception *, RowInsertTwice, (int32_t index, app::String * table_name));
    IL2CPP_REGISTER_METHOD(0x01F545E0, app::Exception *, RowInsertMissing, (app::String * table_name));
    IL2CPP_REGISTER_METHOD(0x01F54670, app::Exception *, RowAlreadyRemoved, ());
    IL2CPP_REGISTER_METHOD(0x01F546F0, app::Exception *, MultipleParents, ());
    IL2CPP_REGISTER_METHOD(0x01F54770, app::Exception *, InvalidRowState, (app::DataRowState__Enum state));
    IL2CPP_REGISTER_METHOD(0x01F547F0, app::Exception *, InvalidRowBitPattern, ());
    IL2CPP_REGISTER_METHOD(0x01F54870, app::Exception *, SetDataSetNameToEmpty, ());
    IL2CPP_REGISTER_METHOD(0x01F548F0, app::Exception *, SetDataSetNameConflicting, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F54980, app::Exception *, DataSetUnsupportedSchema, (app::String * ns));
    IL2CPP_REGISTER_METHOD(0x01F54A10, app::Exception *, MergeMissingDefinition, (app::String * obj));
    IL2CPP_REGISTER_METHOD(0x01F54AA0, app::Exception *, TablesInDifferentSets, ());
    IL2CPP_REGISTER_METHOD(0x01F54B20, app::Exception *, RelationAlreadyExists, ());
    IL2CPP_REGISTER_METHOD(0x01F54BA0, app::Exception *, RowAlreadyInOtherCollection, ());
    IL2CPP_REGISTER_METHOD(0x01F54C20, app::Exception *, RowAlreadyInTheCollection, ());
    IL2CPP_REGISTER_METHOD(0x01F54CA0, app::Exception *, RecordStateRange, ());
    IL2CPP_REGISTER_METHOD(0x01F54D20, app::Exception *, IndexKeyLength, (int32_t length, int32_t key_length));
    IL2CPP_REGISTER_METHOD(0x01F54E40, app::Exception *, RemovePrimaryKey, (app::DataTable * table));
    IL2CPP_REGISTER_METHOD(0x01F54F00, app::Exception *, RelationAlreadyInOtherDataSet, ());
    IL2CPP_REGISTER_METHOD(0x01F54F80, app::Exception *, RelationAlreadyInTheDataSet, ());
    IL2CPP_REGISTER_METHOD(0x01F55000, app::Exception *, RelationNotInTheDataSet, (app::String * relation));
    IL2CPP_REGISTER_METHOD(0x01F55090, app::Exception *, RelationOutOfRange, (app::Object * index));
    IL2CPP_REGISTER_METHOD(0x01F55150, app::Exception *, DuplicateRelation, (app::String * relation));
    IL2CPP_REGISTER_METHOD(0x01F551E0, app::Exception *, RelationTableNull, ());
    IL2CPP_REGISTER_METHOD(0x01F55260, app::Exception *, RelationDataSetNull, ());
    IL2CPP_REGISTER_METHOD(0x01F552E0, app::Exception *, RelationTableWasRemoved, ());
    IL2CPP_REGISTER_METHOD(0x01F55360, app::Exception *, ParentTableMismatch, ());
    IL2CPP_REGISTER_METHOD(0x01F553E0, app::Exception *, ChildTableMismatch, ());
    IL2CPP_REGISTER_METHOD(0x01F55460, app::Exception *, EnforceConstraint, ());
    IL2CPP_REGISTER_METHOD(0x01F554E0, app::Exception *, CaseLocaleMismatch, ());
    IL2CPP_REGISTER_METHOD(0x01F55560, app::Exception *, CannotChangeCaseLocale_1, ());
    IL2CPP_REGISTER_METHOD(0x01F55570, app::Exception *, CannotChangeCaseLocale_2, (app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x01F55600, app::Exception *, InvalidRemotingFormat, (app::SerializationFormat__Enum_1 mode));
    IL2CPP_REGISTER_METHOD(0x01F55680, app::Exception *, TableForeignPrimaryKey, ());
    IL2CPP_REGISTER_METHOD(0x01F55700, app::Exception *, TableCannotAddToSimpleContent, ());
    IL2CPP_REGISTER_METHOD(0x01F55780, app::Exception *, NoTableName, ());
    IL2CPP_REGISTER_METHOD(0x01F55800, app::Exception *, MultipleTextOnlyColumns, ());
    IL2CPP_REGISTER_METHOD(0x01F55880, app::Exception *, InvalidSortString, (app::String * sort));
    IL2CPP_REGISTER_METHOD(0x01F55910, app::Exception *, DuplicateTableName, (app::String * table));
    IL2CPP_REGISTER_METHOD(0x01F559A0, app::Exception *, DuplicateTableName2, (app::String * table, app::String * ns));
    IL2CPP_REGISTER_METHOD(0x01F55A40, app::Exception *, SelfnestedDatasetConflictingName, (app::String * table));
    IL2CPP_REGISTER_METHOD(0x01F55AD0, app::Exception *, DatasetConflictingName, (app::String * table));
    IL2CPP_REGISTER_METHOD(0x01F55B60, app::Exception *, TableAlreadyInOtherDataSet, ());
    IL2CPP_REGISTER_METHOD(0x01F55BE0, app::Exception *, TableAlreadyInTheDataSet, ());
    IL2CPP_REGISTER_METHOD(0x01F55C60, app::Exception *, TableOutOfRange, (int32_t index));
    IL2CPP_REGISTER_METHOD(0x01F55D30, app::Exception *, TableNotInTheDataSet, (app::String * table));
    IL2CPP_REGISTER_METHOD(0x01F55DC0, app::Exception *, TableInRelation, ());
    IL2CPP_REGISTER_METHOD(0x01F55E40, app::Exception *, TableInConstraint, (app::DataTable * table, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHOD(0x01F55F10, app::Exception *, CanNotSerializeDataTableHierarchy, ());
    IL2CPP_REGISTER_METHOD(0x01F55F90, app::Exception *, CanNotRemoteDataTable, ());
    IL2CPP_REGISTER_METHOD(0x01F56010, app::Exception *, CanNotSetRemotingFormat, ());
    IL2CPP_REGISTER_METHOD(0x01F56090, app::Exception *, CanNotSerializeDataTableWithEmptyName, ());
    IL2CPP_REGISTER_METHOD(0x01F56110, app::Exception *, TableNotFound, (app::String * table_name));
    IL2CPP_REGISTER_METHOD(0x01F561A0, app::Exception *, AggregateException, (app::AggregateType__Enum aggregate_type, app::Type * type));
    IL2CPP_REGISTER_METHOD(0x01F56290, app::Exception *, InvalidStorageType, (app::TypeCode__Enum typecode));
    IL2CPP_REGISTER_METHOD(0x01F56350, app::Exception *, RangeArgument, (int32_t min, int32_t max));
    IL2CPP_REGISTER_METHOD(0x01F56450, app::Exception *, NullRange, ());
    IL2CPP_REGISTER_METHOD(0x01F564D0, app::Exception *, NegativeMinimumCapacity, ());
    IL2CPP_REGISTER_METHOD(0x01F56550, app::Exception *, ProblematicChars, (uint16_t char_value));
    IL2CPP_REGISTER_METHOD(0x01F56640, app::Exception *, StorageSetFailed, ());
    IL2CPP_REGISTER_METHOD(0x01F566C0, app::Exception *, SimpleTypeNotSupported, ());
    IL2CPP_REGISTER_METHOD(0x01F56740, app::Exception *, MissingAttribute_1, (app::String * attribute));
    IL2CPP_REGISTER_METHOD(0x01F567D0, app::Exception *, MissingAttribute_2, (app::String * element, app::String * attribute));
    IL2CPP_REGISTER_METHOD(0x01F56870, app::Exception *, InvalidAttributeValue, (app::String * name, app::String * value));
    IL2CPP_REGISTER_METHOD(0x01F56910, app::Exception *, AttributeValues, (app::String * name, app::String * value1, app::String * value2));
    IL2CPP_REGISTER_METHOD(0x01F569D0, app::Exception *, ElementTypeNotFound, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F56A60, app::Exception *, RelationParentNameMissing, (app::String * rel));
    IL2CPP_REGISTER_METHOD(0x01F56AF0, app::Exception *, RelationChildNameMissing, (app::String * rel));
    IL2CPP_REGISTER_METHOD(0x01F56B80, app::Exception *, RelationTableKeyMissing, (app::String * rel));
    IL2CPP_REGISTER_METHOD(0x01F56C10, app::Exception *, RelationChildKeyMissing, (app::String * rel));
    IL2CPP_REGISTER_METHOD(0x01F56CA0, app::Exception *, UndefinedDatatype, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F56D30, app::Exception *, DatatypeNotDefined, ());
    IL2CPP_REGISTER_METHOD(0x01F56DB0, app::Exception *, MismatchKeyLength, ());
    IL2CPP_REGISTER_METHOD(0x01F56E30, app::Exception *, InvalidField, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F56EC0, app::Exception *, InvalidSelector, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F56F50, app::Exception *, CircularComplexType, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F56FE0, app::Exception *, CannotInstantiateAbstract, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F57070, app::Exception *, InvalidKey, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F57100, app::Exception *, DiffgramMissingTable, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F57190, app::Exception *, DiffgramMissingSQL, ());
    IL2CPP_REGISTER_METHOD(0x01F57210, app::Exception *, DuplicateConstraintRead, (app::String * str));
    IL2CPP_REGISTER_METHOD(0x01F572A0, app::Exception *, ColumnTypeConflict, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F57330, app::Exception *, CannotConvert, (app::String * name, app::String * type));
    IL2CPP_REGISTER_METHOD(0x01F573D0, app::Exception *, MissingRefer, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F57480, app::Exception *, InvalidPrefix, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F57510, app::Exception *, CanNotDeserializeObjectType, ());
    IL2CPP_REGISTER_METHOD(0x01F57590, app::Exception *, IsDataSetAttributeMissingInSchema, ());
    IL2CPP_REGISTER_METHOD(0x01F57610, app::Exception *, TooManyIsDataSetAtributeInSchema, ());
    IL2CPP_REGISTER_METHOD(0x01F57690, app::Exception *, NestedCircular, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F57720, app::Exception *, MultipleParentRows, (app::String * table_q_name));
    IL2CPP_REGISTER_METHOD(0x01F577B0, app::Exception *, PolymorphismNotSupported, (app::String * type_name));
    IL2CPP_REGISTER_METHOD(0x01F57840, app::Exception *, DataTableInferenceNotSupported, ());
    IL2CPP_REGISTER_METHOD(0x01F578C0, void, ThrowMultipleTargetConverter, (app::Exception * inner_exception));
    IL2CPP_REGISTER_METHOD(0x01F57950, app::Exception *, DuplicateDeclaration, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F579E0, app::Exception *, FoundEntity, ());
    IL2CPP_REGISTER_METHOD(0x01F57A60, app::Exception *, MergeFailed, (app::String * name));
    IL2CPP_REGISTER_METHOD(0x01F57A70, app::Exception *, ConvertFailed, (app::Type * type1, app::Type * type2));
    IL2CPP_REGISTER_METHOD(0x01F57B50, app::Exception *, InvalidDuplicateNamedSimpleTypeDelaration, (app::String * st_name, app::String * error_str));
    IL2CPP_REGISTER_METHOD(0x01F57BF0, app::Exception *, InternalRBTreeError, (app::RBTreeError__Enum internal_error));
    IL2CPP_REGISTER_METHOD(0x01F57C90, app::Exception *, EnumeratorModified, ());
    IL2CPP_REGISTER_METHOD(0x02652A50, app::Exception *, _InvalidEnumArgumentException_2, (app::Object * value));
    IL2CPP_REGISTER_METHOD(0x02652910, app::Exception *, _InvalidEnumArgumentException_3, (app::DataSetDateTime__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04721218, ExceptionBuilder__InvalidEnumArgumentException_2__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02652910, app::Exception *, _InvalidEnumArgumentException_4, (app::DataRowState__Enum value));
    IL2CPP_REGISTER_METHODINFO(0x04747700, ExceptionBuilder__InvalidEnumArgumentException_3__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02652910, app::Exception *, _InvalidEnumArgumentException_5, (app::SerializationFormat__Enum_1 value));
    IL2CPP_REGISTER_METHODINFO(0x0477A130, ExceptionBuilder__InvalidEnumArgumentException_4__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02652910, app::Exception *, _InvalidEnumArgumentException_6, (app::Int32Enum__Enum value));
}

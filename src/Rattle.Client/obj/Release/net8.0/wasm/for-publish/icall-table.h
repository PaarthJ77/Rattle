#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
191,
199,
200,
201,
202,
203,
204,
205,
207,
208,
256,
257,
258,
282,
283,
284,
295,
296,
297,
298,
387,
388,
389,
392,
426,
427,
429,
431,
433,
435,
440,
448,
449,
450,
451,
452,
453,
454,
455,
456,
536,
537,
593,
599,
602,
604,
609,
610,
612,
613,
617,
618,
620,
622,
623,
626,
627,
628,
631,
634,
636,
638,
647,
703,
705,
707,
717,
718,
719,
721,
727,
728,
729,
730,
731,
739,
740,
741,
745,
746,
748,
750,
936,
1088,
1089,
6533,
6534,
6536,
6537,
6538,
6539,
6540,
6542,
6544,
6546,
6554,
6556,
6561,
6563,
6565,
6567,
6618,
6619,
6621,
6622,
6623,
6624,
6625,
6627,
6629,
7585,
7589,
7591,
7592,
7593,
7594,
7787,
7788,
7789,
7790,
7806,
7807,
7808,
7810,
7851,
7924,
7926,
7935,
7936,
7937,
7938,
8361,
8364,
8365,
8391,
8408,
8415,
8422,
8433,
8436,
8456,
8527,
8529,
8538,
8540,
8541,
8548,
8562,
8582,
8583,
8591,
8593,
8600,
8601,
8604,
8606,
8611,
8617,
8618,
8625,
8627,
8639,
8642,
8643,
8644,
8655,
8664,
8670,
8671,
8672,
8674,
8675,
8692,
8694,
8708,
8725,
8752,
8777,
8778,
9199,
9282,
9283,
9429,
9430,
9434,
9437,
9499,
9862,
9863,
10089,
10099,
10681,
10702,
10704,
10706,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 191,
ves_icall_System_Array_InternalCreate,
// token 199,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 207,
ves_icall_System_Array_SetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 256,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 257,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 258,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 282,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 283,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 284,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 295,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 296,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 297,
ves_icall_System_Enum_InternalGetCorElementType,
// token 298,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 387,
ves_icall_System_Environment_get_ProcessorCount,
// token 388,
ves_icall_System_Environment_get_TickCount,
// token 389,
ves_icall_System_Environment_get_TickCount64,
// token 392,
ves_icall_System_Environment_FailFast_raw,
// token 426,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 427,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 429,
ves_icall_System_GC_SuppressFinalize_raw,
// token 431,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 433,
ves_icall_System_GC_GetGCMemoryInfo,
// token 435,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 440,
ves_icall_System_Object_MemberwiseClone_raw,
// token 448,
ves_icall_System_Math_Ceiling,
// token 449,
ves_icall_System_Math_Cos,
// token 450,
ves_icall_System_Math_Floor,
// token 451,
ves_icall_System_Math_Log10,
// token 452,
ves_icall_System_Math_Pow,
// token 453,
ves_icall_System_Math_Sin,
// token 454,
ves_icall_System_Math_Sqrt,
// token 455,
ves_icall_System_Math_Tan,
// token 456,
ves_icall_System_Math_ModF,
// token 536,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 537,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 593,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 599,
ves_icall_RuntimeType_make_array_type_raw,
// token 602,
ves_icall_RuntimeType_make_byref_type_raw,
// token 604,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 609,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 610,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 612,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 613,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 617,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 618,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 620,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 622,
ves_icall_System_RuntimeType_getFullName_raw,
// token 623,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 626,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 627,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 628,
ves_icall_RuntimeType_GetFields_native_raw,
// token 631,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 634,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 636,
ves_icall_RuntimeType_GetName_raw,
// token 638,
ves_icall_RuntimeType_GetNamespace_raw,
// token 647,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 703,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 705,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 707,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 717,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 718,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 719,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 721,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 727,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 728,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 729,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 730,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 731,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 739,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 740,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 741,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 745,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 746,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 748,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 750,
ves_icall_System_String_FastAllocateString_raw,
// token 936,
ves_icall_System_Type_internal_from_handle_raw,
// token 1088,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1089,
ves_icall_System_ValueType_Equals_raw,
// token 6533,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6534,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6536,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6537,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6538,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6539,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6540,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6542,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6544,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6546,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6554,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6556,
mono_monitor_exit_icall_raw,
// token 6561,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6563,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6565,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6567,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6618,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6619,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6621,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6622,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6623,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6624,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6625,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6627,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6629,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7585,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7589,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7591,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7592,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7593,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7594,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7787,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7788,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7789,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7790,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7806,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7807,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7808,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7810,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7851,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7924,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7926,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7935,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7936,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7937,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7938,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8361,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8364,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8365,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8391,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8408,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8415,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8422,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8433,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8436,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8456,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8527,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8529,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8538,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8540,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8541,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8548,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8562,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8582,
ves_icall_reflection_get_token_raw,
// token 8583,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8591,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8593,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8600,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8601,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8604,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8606,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8611,
ves_icall_reflection_get_token_raw,
// token 8617,
ves_icall_get_method_info_raw,
// token 8618,
ves_icall_get_method_attributes,
// token 8625,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8627,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8639,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8642,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8643,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8644,
ves_icall_reflection_get_token_raw,
// token 8655,
ves_icall_InternalInvoke_raw,
// token 8664,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8670,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8671,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8672,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8674,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8675,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8692,
ves_icall_InvokeClassConstructor_raw,
// token 8694,
ves_icall_InternalInvoke_raw,
// token 8708,
ves_icall_reflection_get_token_raw,
// token 8725,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8752,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8777,
ves_icall_reflection_get_token_raw,
// token 8778,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9199,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9282,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9283,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9429,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9430,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9434,
ves_icall_ModuleBuilder_getToken_raw,
// token 9437,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9499,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9862,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9863,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10089,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10099,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10681,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10702,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10704,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10706,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ZipUtility.ZipUtilityInterface.OnStartProcess
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// int                            bytes                          (Parm, ZeroConstructor, IsPlainOldData)

void UZipUtilityInterface::OnStartProcess(const struct FString& archive, int bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnStartProcess");

	UZipUtilityInterface_OnStartProcess_Params params;
	params.archive = archive;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnProgress
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// float                          percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            bytes                          (Parm, ZeroConstructor, IsPlainOldData)

void UZipUtilityInterface::OnProgress(const struct FString& archive, float percentage, int bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnProgress");

	UZipUtilityInterface_OnProgress_Params params;
	params.archive = archive;
	params.percentage = percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnFileFound
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// struct FString                 file                           (Parm, ZeroConstructor)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)

void UZipUtilityInterface::OnFileFound(const struct FString& archive, const struct FString& file, int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnFileFound");

	UZipUtilityInterface_OnFileFound_Params params;
	params.archive = archive;
	params.file = file;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnFileDone
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// struct FString                 file                           (Parm, ZeroConstructor)

void UZipUtilityInterface::OnFileDone(const struct FString& archive, const struct FString& file)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnFileDone");

	UZipUtilityInterface_OnFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipUtilityInterface.OnDone
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 archive                        (Parm, ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState> CompletionState                (Parm, ZeroConstructor, IsPlainOldData)

void UZipUtilityInterface::OnDone(const struct FString& archive, TEnumAsByte<EZipUtilityCompletionState> CompletionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipUtilityInterface.OnDone");

	UZipUtilityInterface_OnDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZipUtility.ZipFileFunctionLibrary.Zip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FileOrFolderPath               (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionLevel> Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_Zip(const struct FString& FileOrFolderPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format, TEnumAsByte<EZipUtilityCompressionLevel> Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.Zip");

	UZipFileFunctionLibrary_Zip_Params params;
	params.FileOrFolderPath = FileOrFolderPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// struct FString                 destinationPath                (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipTo(const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipTo");

	UZipFileFunctionLibrary_UnzipTo_Params params;
	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int>                    fileIndices                    (ConstParm, Parm, ZeroConstructor)
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// struct FString                 destinationPath                (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipFilesTo(TArray<int> fileIndices, const struct FString& ArchivePath, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipFilesTo");

	UZipFileFunctionLibrary_UnzipFilesTo_Params params;
	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int>                    fileIndices                    (ConstParm, Parm, ZeroConstructor)
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipFiles(TArray<int> fileIndices, const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipFiles");

	UZipFileFunctionLibrary_UnzipFiles_Params params;
	params.fileIndices = fileIndices;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FString                 destinationPath                (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipFileNamedTo(const struct FString& ArchivePath, const struct FString& Name, const struct FString& destinationPath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamedTo");

	UZipFileFunctionLibrary_UnzipFileNamedTo_Params params;
	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.destinationPath = destinationPath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_UnzipFileNamed(const struct FString& ArchivePath, const struct FString& Name, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.UnzipFileNamed");

	UZipFileFunctionLibrary_UnzipFileNamed_Params params;
	params.ArchivePath = ArchivePath;
	params.Name = Name;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.Unzip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_Unzip(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.Unzip");

	UZipFileFunctionLibrary_Unzip_Params params;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ArchivePath                    (Parm, ZeroConstructor)
// class UObject*                 ZipUtilityInterfaceDelegate    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EZipUtilityCompressionFormat> Format                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UZipFileFunctionLibrary::STATIC_ListFilesInArchive(const struct FString& ArchivePath, class UObject* ZipUtilityInterfaceDelegate, TEnumAsByte<EZipUtilityCompressionFormat> Format)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZipUtility.ZipFileFunctionLibrary.ListFilesInArchive");

	UZipFileFunctionLibrary_ListFilesInArchive_Params params;
	params.ArchivePath = ArchivePath;
	params.ZipUtilityInterfaceDelegate = ZipUtilityInterfaceDelegate;
	params.Format = Format;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

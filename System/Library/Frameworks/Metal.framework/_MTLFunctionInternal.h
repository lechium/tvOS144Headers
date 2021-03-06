/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLFunction.h>

@class NSString;

@interface _MTLFunctionInternal : _MTLFunction {

	MTLFunctionData _functionData;
	unsigned char _publicMetadataInitialized;
	unsigned char _privateMetadataInitialized;
	unsigned char _sourceArchiveMetadataInitialized;
	MTLProgramObject* _programObject;
	NSString* _filePath;
	long long _lineNumber;

}
-(void)dealloc;
-(id)arguments;
-(void)setArguments:(id)arg1 ;
-(long long)lineNumber;
-(id)vertexAttributes;
-(id)functionConstants;
-(unsigned long long)bitCodeOffset;
-(id)pluginData;
-(unsigned char)bitcodeType;
-(unsigned long long)bitCodeFileSize;
-(const SCD_Struct_MT6*)bitCodeHash;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(MTLLibraryData*)arg3 functionData:(MTLFunctionData*)arg4 device:(id)arg5 ;
-(unsigned long long)sourceArchiveOffset;
-(void)setSourceArchiveOffset:(unsigned long long)arg1 ;
-(void)setReturnType:(id)arg1 ;
-(void)setLineNumber:(long long)arg1 ;
-(void)setFilePath:(id)arg1 ;
-(void)setFunctionConstants:(id)arg1 ;
-(void)setVertexAttributes:(id)arg1 ;
-(id)filePath;
-(void)setUnpackedFilePath:(id)arg1 ;
-(BOOL)needsFunctionConstantValues;
-(id)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned)arg2 constants:(id)arg3 functionCache:(id)arg4 originalRequest:(const MTLCompilerFunctionRequest*)arg5 specializedName:(id)arg6 error:(id*)arg7 ;
-(void)newSpecializedFunctionWithRequestType:(int)arg1 llvmTargetVersion:(unsigned)arg2 constants:(id)arg3 functionCache:(id)arg4 originalRequest:(const MTLCompilerFunctionRequest*)arg5 sync:(BOOL)arg6 specializedName:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(id)stageInputAttributes;
-(unsigned long long)patchType;
-(long long)patchControlPointCount;
-(id)functionConstantsDictionary;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2 ;
-(id)unpackedFilePath;
-(id)returnType;
-(void)initializePublicMetadata;
-(BOOL)specializedFunctionHash:(SCD_Struct_MT6*)arg1 requestData:(id*)arg2 constants:(id)arg3 specializedName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setFunctionConstantSpecializationHash:(const SCD_Struct_MT6*)arg1 ;
-(void)initializePrivateMetadata;
-(void)initializeSourceArchive;
-(MTLProgramObject*)programObject;
-(const MTLFunctionData*)functionData;
-(void)setBitcodeType:(unsigned char)arg1 ;
-(void)setPluginData:(id)arg1 ;
-(void)setStageInputAttributes:(id)arg1 ;
-(id)functionInputs;
@end


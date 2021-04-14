/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, MTLType, NSArray;


@protocol MTLFunctionSPI <MTLFunction>
@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
@required
-(NSArray *)arguments;
-(long long)lineNumber;
-(const SCD_Struct_MT14*)bitCodeHash;
-(NSString *)filePath;
-(id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3;
-(id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2;
-(id)reflectionWithOptions:(unsigned long long)arg1;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
-(id)bitcodeData;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
-(NSString *)unpackedFilePath;
-(MTLType *)returnType;

@end


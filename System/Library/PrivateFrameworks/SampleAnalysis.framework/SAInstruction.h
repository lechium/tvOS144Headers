/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SABinary, SASegment, NSString, SASymbol, SASourceInfo;

@interface SAInstruction : NSObject <SASerializable> {

	id _symbolOrSymbols;
	id _sourceInfoOrSourceInfos;
	SABinary* _binary;
	SASegment* _segment;
	unsigned long long _offsetIntoSegment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak,readonly) SABinary * binary; 
@property (__weak,readonly) SASegment * segment; 
@property (readonly) long long offsetIntoBinary; 
@property (readonly) unsigned long long offsetIntoSegment; 
@property (readonly) SASymbol * symbol; 
@property (readonly) SASourceInfo * sourceInfo; 
@property (readonly) unsigned long long offsetIntoTextSegment; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
-(NSString *)debugDescription;
-(SASymbol *)symbol;
-(SASegment *)segment;
-(SASourceInfo *)sourceInfo;
-(SABinary *)binary;
-(unsigned long long)numSymbols;
-(unsigned long long)offsetIntoSegment;
-(unsigned long long)enumerateSymbols:(/*^block*/id)arg1 ;
-(BOOL)hasOffsetIntoBinary;
-(long long)offsetIntoBinary;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(BOOL)symbolicateWithOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(unsigned long long)offsetIntoTextSegment;
@end


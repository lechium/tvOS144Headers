/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SACSSymbolOwnerWrapper, NSString, SASegment, NSMutableArray, NSUUID, NSArray;

@interface SABinary : NSObject <SAJSONSerialization, SASerializable> {

	SACSSymbolOwnerWrapper* _symbolOwnerWrapper;
	unsigned long long _alreadyAttempted;
	BOOL _attemptedToGetBundleInfo;
	NSString* _name;
	unsigned long long _optionsWhenLastSymbolicated;
	BOOL _hadSymbolOwnerWhenLastSymbolicated;
	BOOL _symbolOwnerWasDsymWhenLastSymbolicated;
	unsigned long long _length;
	SASegment* _fakeEntireBinarySegment;
	NSMutableArray* _segments;
	BOOL _haveMoreInstructionsToSymbolicate;
	NSUUID* _uuid;
	NSString* _path;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleShortVersion;
	NSString* _binaryVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long length; 
@property (readonly) NSString * name; 
@property (readonly) NSString * path; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSString * bundleShortVersion; 
@property (readonly) NSString * binaryVersion; 
@property (readonly) NSArray * segments; 
@property (readonly) unsigned long long textSegmentLength; 
@property (readonly) BOOL hasTextExecSegment; 
+(void)clearCaches;
+(void)enableImmediateCleanupOfCSSymbolOwners;
+(void)clearSymbolCaches;
+(id)binaryWithUUID:(id)arg1 ;
+(void)clearCoreSymbolicationCaches;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(void)addSymbolsFromTailspin:(id)arg1 ;
+(void)addDsymPaths:(id)arg1 ;
+(void)addPath:(id)arg1 forBinaryWithUUID:(id)arg2 ;
-(NSString *)name;
-(NSString *)debugDescription;
-(unsigned long long)length;
-(NSString *)path;
-(NSString *)bundleIdentifier;
-(NSUUID *)uuid;
-(NSString *)bundleVersion;
-(id)initWithUUID:(id)arg1 ;
-(NSString *)binaryVersion;
-(void)addPath:(id)arg1 ;
-(NSArray *)segments;
-(NSString *)bundleShortVersion;
-(void)gatherInfoWithDataGatheringOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(id)segmentWithName:(id)arg1 ;
-(BOOL)cacheSymbolOwnerWithOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(void)symbolicateAllInstructionsWithOptions:(unsigned long long)arg1 pid:(int)arg2 ;
-(void)clearSymbolCache;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA7*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)clearCoreSymbolicationCache;
-(id)instructionAtOffsetIntoBinary:(long long)arg1 ;
-(unsigned long long)textSegmentLength;
-(BOOL)hasTextExecSegment;
-(id)instructionAtOffsetIntoTextSegment:(unsigned long long)arg1 ;
@end

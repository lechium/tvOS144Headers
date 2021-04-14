/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterCertHomeKitTestSubmission : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _accessoryManufacturer;
	NSString* _accessoryName;
	NSString* _testName;
	NSString* _testUUID;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryManufacturer; 
@property (nonatomic,retain) NSString * accessoryManufacturer;              //@synthesize accessoryManufacturer=_accessoryManufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryName; 
@property (nonatomic,retain) NSString * accessoryName;                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) BOOL hasTestUUID; 
@property (nonatomic,retain) NSString * testUUID;                           //@synthesize testUUID=_testUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                           //@synthesize testName=_testName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTestUUID:(NSString *)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(BOOL)hasTestUUID;
-(BOOL)hasTestName;
-(NSString *)testUUID;
-(NSString *)testName;
-(void)setAccessoryName:(NSString *)arg1 ;
-(BOOL)hasAccessoryName;
-(NSString *)accessoryName;
-(void)setAccessoryManufacturer:(NSString *)arg1 ;
-(BOOL)hasAccessoryManufacturer;
-(NSString *)accessoryManufacturer;
@end


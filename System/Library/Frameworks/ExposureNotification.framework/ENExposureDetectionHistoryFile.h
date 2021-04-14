/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString, ENRegion;

@interface ENExposureDetectionHistoryFile : NSObject <CUXPCCodable> {

	NSData* _fileHash;
	NSDate* _processDate;
	NSDictionary* _metadata;
	NSNumber* _keyCount;
	NSNumber* _matchCount;
	NSString* _sourceAppBundleIdentifier;
	ENRegion* _sourceRegion;

}

@property (nonatomic,copy) NSData * fileHash;                                 //@synthesize fileHash=_fileHash - In the implementation block
@property (nonatomic,copy) NSDate * processDate;                              //@synthesize processDate=_processDate - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSNumber * keyCount;                               //@synthesize keyCount=_keyCount - In the implementation block
@property (nonatomic,copy) NSNumber * matchCount;                             //@synthesize matchCount=_matchCount - In the implementation block
@property (nonatomic,copy) NSString * sourceAppBundleIdentifier;              //@synthesize sourceAppBundleIdentifier=_sourceAppBundleIdentifier - In the implementation block
@property (nonatomic,copy) ENRegion * sourceRegion;                           //@synthesize sourceRegion=_sourceRegion - In the implementation block
-(id)description;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(ENRegion *)sourceRegion;
-(void)setSourceRegion:(ENRegion *)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(NSString *)sourceAppBundleIdentifier;
-(void)setSourceAppBundleIdentifier:(NSString *)arg1 ;
-(NSData *)fileHash;
-(void)setFileHash:(NSData *)arg1 ;
-(NSNumber *)matchCount;
-(NSDate *)processDate;
-(void)setProcessDate:(NSDate *)arg1 ;
-(NSNumber *)keyCount;
-(void)setKeyCount:(NSNumber *)arg1 ;
-(void)setMatchCount:(NSNumber *)arg1 ;
@end


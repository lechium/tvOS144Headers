/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CPLChangeSessionUpdate : NSObject <NSSecureCoding> {

	NSString* _libraryVersion;
	NSDate* _queuedDate;

}

@property (nonatomic,copy,readonly) NSString * libraryVersion;              //@synthesize libraryVersion=_libraryVersion - In the implementation block
@property (nonatomic,readonly) NSDate * queuedDate;                         //@synthesize queuedDate=_queuedDate - In the implementation block
@property (nonatomic,readonly) NSString * statusDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(NSString *)libraryVersion;
-(BOOL)applyToStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)discardFromStore:(id)arg1 error:(id*)arg2 ;
-(id)storageForStatusInStore:(id)arg1 ;
-(NSString *)statusDescription;
-(id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1 ;
-(NSDate *)queuedDate;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, AMSBagFrozenDataSource, NSString, AMSProcessInfo;

@interface AMSSnapshotBag : NSObject <NSSecureCoding, AMSBagProtocol> {

	NSDate* _creationDate;
	AMSBagFrozenDataSource* _dataSource;

}

@property (nonatomic,retain) AMSBagFrozenDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSDate *)creationDate;
-(id)boolForKey:(id)arg1 ;
-(BOOL)isLoaded;
-(id)integerForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(BOOL)isExpired;
-(NSString *)profile;
-(AMSBagFrozenDataSource *)dataSource;
-(void)setDataSource:(AMSBagFrozenDataSource *)arg1 ;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)URLForKey:(id)arg1 account:(id)arg2 ;
-(id)compile;
-(id)_initWithSnapshotBag:(id)arg1 ;
-(id)_initWithDataSource:(id)arg1 ;
@end


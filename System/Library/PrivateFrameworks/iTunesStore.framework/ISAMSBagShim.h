/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, SSBag, ISURLBag;

@interface ISAMSBagShim : NSObject <AMSBagProtocol> {

	SSBag* _bag;
	ISURLBag* _URLBag;
	long long _type;

}

@property (nonatomic,retain) SSBag * bag;                                      //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) ISURLBag * URLBag;                                //@synthesize URLBag=_URLBag - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSDate *)expirationDate;
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
-(id)initWithURLBag:(id)arg1 ;
-(SSBag *)bag;
-(void)setBag:(SSBag *)arg1 ;
-(NSString *)profileVersion;
-(ISURLBag *)URLBag;
-(id)initWithBag:(id)arg1 ;
-(id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)setURLBag:(ISURLBag *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVSBackgroundTask, ISOperation, ISURLBag;

@interface TVSStoreURLBag : NSObject {

	TVSBackgroundTask* _bagReloadTask;
	ISOperation* _pendingOperation;
	BOOL _isValid;
	ISURLBag* _fallbackBag;
	unsigned long long _loadBagRetryAttempt;

}

@property (retain) ISURLBag * fallbackBag;                              //@synthesize fallbackBag=_fallbackBag - In the implementation block
@property (nonatomic,readonly) ISURLBag * bag; 
@property (assign) unsigned long long loadBagRetryAttempt;              //@synthesize loadBagRetryAttempt=_loadBagRetryAttempt - In the implementation block
@property (nonatomic,readonly) BOOL isValid;                            //@synthesize isValid=_isValid - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isValid;
-(id)valueForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)_userIdentifier;
-(void)reload;
-(ISURLBag *)bag;
-(id)_bagContext;
-(id)initInstance;
-(void)_internetStateChanged:(id)arg1 ;
-(void)_storeFrontChanged:(id)arg1 ;
-(void)_loadBagCancelPreviousRequests:(BOOL)arg1 ;
-(ISURLBag *)fallbackBag;
-(void)_updateReloadTask;
-(void)setFallbackBag:(ISURLBag *)arg1 ;
-(void)setLoadBagRetryAttempt:(unsigned long long)arg1 ;
-(unsigned long long)loadBagRetryAttempt;
-(void)_loadBag;
-(void)_retry:(unsigned long long)arg1 withSelector:(SEL)arg2 ;
-(void)_handleAccountActivity:(id)arg1 ;
-(double)_bagReloadInterval;
-(void)_updateReloadTaskWithInterval:(double)arg1 ;
@end


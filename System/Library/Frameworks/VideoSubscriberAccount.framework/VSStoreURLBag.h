/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSURLBag;

@interface VSStoreURLBag : NSObject {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;              //@synthesize bag=_bag - In the implementation block
-(id)init;
-(void)invalidateCache;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end


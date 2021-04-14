/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VSAccountStore, VSAccountChannelsCenter, VSPrivacyVoucherLockbox, VSPrivacyFacade;

@interface VSPersistentStorage : NSObject {

	VSAccountStore* _accountStore;
	VSAccountChannelsCenter* _channelsCenter;
	VSPrivacyVoucherLockbox* _voucherLockbox;
	VSPrivacyFacade* _privacyFacade;

}

@property (nonatomic,readonly) VSAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) VSAccountChannelsCenter * channelsCenter;              //@synthesize channelsCenter=_channelsCenter - In the implementation block
@property (nonatomic,readonly) VSPrivacyVoucherLockbox * voucherLockbox;              //@synthesize voucherLockbox=_voucherLockbox - In the implementation block
@property (nonatomic,readonly) VSPrivacyFacade * privacyFacade;                       //@synthesize privacyFacade=_privacyFacade - In the implementation block
+(id)defaultStorageDirectoryURL;
-(id)init;
-(VSAccountStore *)accountStore;
-(VSAccountChannelsCenter *)channelsCenter;
-(VSPrivacyVoucherLockbox *)voucherLockbox;
-(id)initWithAccountStoreClass:(Class)arg1 channelsCenterClass:(Class)arg2 ;
-(id)initWithAccountStoreClass:(Class)arg1 ;
-(VSPrivacyFacade *)privacyFacade;
@end


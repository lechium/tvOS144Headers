/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObject;
@class CNContact, PKPaymentOptionsSynchronization;

@interface PKPaymentOptionsRecents : NSObject {

	CNContact* _cachedMeContact;
	id<NSObject> _meContactDidChangeNotificationObserver;
	PKPaymentOptionsSynchronization* _optionsSynchronization;
	BOOL _meCardCachingEnabled;

}

@property (nonatomic,readonly) CNContact * meCard; 
@property (assign,getter=isMeCardCachingEnabled,nonatomic) BOOL meCardCachingEnabled;              //@synthesize meCardCachingEnabled=_meCardCachingEnabled - In the implementation block
+(id)defaultInstance;
-(id)init;
-(void)dealloc;
-(CNContact *)meCard;
-(id)recentsForPreference:(id)arg1 ;
-(id)meCardEntriesForPreference:(id)arg1 ;
-(void)_setKeychainData:(id)arg1 forKey:(id)arg2 ;
-(id)_keychainDataForKey:(id)arg1 ;
-(BOOL)isMeCardCachingEnabled;
-(id)postalAddressMetadataForContact:(id)arg1 ;
-(void)recentsForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)meCardEntriesForPreference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_labelsToPropertiesDictionaryForContact:(id)arg1 ;
-(id)_correctCountryCodeIfNecessaryForPostalAddress:(id)arg1 ;
-(id)contactMetadataForContact:(id)arg1 preference:(id)arg2 ;
-(void)deleteRecentsForPreference:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllRecentsWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMeCardCachingEnabled:(BOOL)arg1 ;
-(id)_keychainKeyFromContactKey:(id)arg1 ;
-(void)_addContactToKeychain:(id)arg1 forPreference:(id)arg2 ;
@end


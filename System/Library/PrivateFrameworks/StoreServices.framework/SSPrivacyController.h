/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SSPrivacyController : NSObject
+(unsigned long long)_currentPrivacyContentVersionForIdentifier:(id)arg1 ;
+(id)_translateIdentifierToPrivacyAcknowledgement:(id)arg1 withVersion:(unsigned long long)arg2 ;
+(void)_appendPrivacyAcknowledgementToLocalAccount:(id)arg1 ;
+(id)_appendPrivacyAcknowledgementToActiveAccount:(id)arg1 withURL:(id)arg2 ;
+(id)_syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2 ;
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg1 URL:(id)arg2 ;
+(void)_appendPrivacyAcknowledgement:(id)arg1 toAccount:(id)arg2 ;
+(id)storePrivacyIdentifiers;
+(id)appStorePrivacyIdentifiers;
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg1 ;
+(BOOL)shouldDisplayPrivacyLinkWithIdentifier:(id)arg1 ;
+(void)syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2 ;
+(id)viewControllerForPrivacySplashWithIdentifier:(id)arg1 URL:(id)arg2 ;
@end

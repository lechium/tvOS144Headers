/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PBSRestrictionService : NSObject
+(id)sharedInstance;
-(id)validateRestrictionForContentType:(unsigned long long)arg1 withRating:(id)arg2 allowInteraction:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)cancelRestrictionAuthorization:(id)arg1 ;
-(id)validateRestrictionForSetting:(unsigned long long)arg1 allowInteraction:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)restrictionsEnabledWithResult:(/*^block*/id)arg1 ;
-(void)authorizeRestrictionsWithResult:(/*^block*/id)arg1 ;
-(void)validatePIN:(id)arg1 withResult:(/*^block*/id)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNAuthorization : NSObject
+(id)logger;
+(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)requestAccessForEntityType:(long long)arg1 error:(id*)arg2 ;
+(long long)authorizationStatusForEntityType:(long long)arg1 ;
+(BOOL)isAccessRestrictedForEntityType:(long long)arg1 ;
@end


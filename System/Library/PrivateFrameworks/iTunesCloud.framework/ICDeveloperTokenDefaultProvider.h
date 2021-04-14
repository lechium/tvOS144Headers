/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICDeveloperTokenProvider.h>

@class NSString;

@interface ICDeveloperTokenDefaultProvider : NSObject <ICDeveloperTokenProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)fetchDeveloperTokenForClientInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/ISOperation.h>

@class SSAccount, NSString;

@interface ISLogoutOperation : ISOperation {

	SSAccount* _account;
	NSString* _logKey;

}

@property (nonatomic,retain) SSAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * logKey;                //@synthesize logKey=_logKey - In the implementation block
-(void)run;
-(SSAccount *)account;
-(void)setAccount:(SSAccount *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)_copyAuthenticationContext;
-(void)_disableAutomaticDownloadKinds;
-(void)_disableBookkeeper;
-(void)_sendLogoutRequest;
-(id)_sbsyncData;
-(id)_createDisableBookkeeperRequestPropertiesWithURL:(id)arg1 ;
-(id)_createLogoutRequestProperties;
-(id)initWithAccount:(id)arg1 logKey:(id)arg2 ;
@end

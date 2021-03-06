/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreKit/ASKLoadResourceOperation.h>

@class NSString;

@interface ASKLoadAvatarResourceOperation : ASKLoadResourceOperation {

	NSString* _playerId;

}

@property (nonatomic,copy,readonly) NSString * playerId;              //@synthesize playerId=_playerId - In the implementation block
-(void)main;
-(NSString *)playerId;
-(id)makePlayerFetchError;
-(id)initWithPlayerId:(id)arg1 ;
@end


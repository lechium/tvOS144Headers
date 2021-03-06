/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GKPlayer;


@protocol GKCustomTournamentDelegate
@property (nonatomic,readonly) GKPlayer * creator; 
@required
-(GKPlayer *)creator;
-(void)addInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)addCreator:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeCreator:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)acceptInvitationWithCompletionHandler:(/*^block*/id)arg1;
-(void)declineInvitationWithCompletionHandler:(/*^block*/id)arg1;

@end


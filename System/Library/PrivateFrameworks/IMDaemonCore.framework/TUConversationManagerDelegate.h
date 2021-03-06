/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TUConversationManagerDelegate <NSObject>
@optional
-(void)conversationsChangedForConversationManager:(id)arg1;
-(void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 localVideoToggledForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 remoteMembersChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
-(void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2;
-(void)serverDisconnectedForConversationManager:(id)arg1;

@end


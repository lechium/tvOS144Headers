/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CNContact;

@interface IMDCoreSpotlightChatParticipant : NSObject {

	BOOL _isSender;
	NSString* _handleID;
	CNContact* _contact;

}

@property (nonatomic,copy,readonly) NSString * handleID;                //@synthesize handleID=_handleID - In the implementation block
@property (nonatomic,retain,readonly) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) BOOL isSender;                           //@synthesize isSender=_isSender - In the implementation block
-(void)dealloc;
-(NSString *)handleID;
-(CNContact *)contact;
-(BOOL)isSender;
-(id)initWithHandleID:(id)arg1 contact:(id)arg2 isSender:(BOOL)arg3 ;
@end


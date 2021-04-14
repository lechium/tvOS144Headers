/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _inviteNotification;
	CoreDAVItemWithNoChildren* _inviteReply;
	CoreDAVItemWithNoChildren* _resourceChanged;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteNotification;              //@synthesize inviteNotification=_inviteNotification - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteReply;                     //@synthesize inviteReply=_inviteReply - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * resourceChanged;                 //@synthesize resourceChanged=_resourceChanged - In the implementation block
@property (nonatomic,readonly) BOOL isInviteReply; 
@property (nonatomic,readonly) BOOL isInviteNotification; 
@property (nonatomic,readonly) BOOL isResourceChanged; 
-(id)description;
-(id)copyParseRules;
-(BOOL)isInviteNotification;
-(BOOL)isInviteReply;
-(BOOL)isResourceChanged;
-(BOOL)notificationNameIn:(id)arg1 ;
-(void)setInviteNotification:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setInviteReply:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setResourceChanged:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)inviteNotification;
-(CoreDAVItemWithNoChildren *)inviteReply;
-(CoreDAVItemWithNoChildren *)resourceChanged;
-(BOOL)notificationNameMatches:(id)arg1 ;
@end

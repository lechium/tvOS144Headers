/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INAnnouncement, NSArray, NSNumber;


@protocol INSendAnnouncementIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAnnouncement * announcement; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSNumber * isReply; 
@required
-(id)init;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(INAnnouncement *)announcement;
-(void)setAnnouncement:(id)arg1;
-(NSNumber *)isReply;
-(void)setIsReply:(id)arg1;

@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessagePartChatItem.h>

@class NSAttributedString;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem {

	NSAttributedString* _subject;

}

@property (nonatomic,copy,readonly) NSAttributedString * subject;              //@synthesize subject=_subject - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSAttributedString *)subject;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 subject:(id)arg5 shouldDisplayLink:(BOOL)arg6 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 subject:(id)arg5 ;
-(id)replyContextPreviewChatItemForReply:(id)arg1 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(NSRange)arg4 subject:(id)arg5 visibleAssociatedMessageChatItems:(id)arg6 ;
-(void)setShouldDisplayRichLink:(BOOL)arg1 ;
-(BOOL)shouldDisplayRichLink;
@end


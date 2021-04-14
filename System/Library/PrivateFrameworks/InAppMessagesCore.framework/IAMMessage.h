/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InAppMessagesCore/InAppMessagesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IAMMessage : NSObject <NSCopying> {

	BOOL _requiresCloseButton;
	NSString* _identifier;
	NSString* _messageGroupIdentifier;
	NSArray* _contentPages;

}

@property (nonatomic,copy,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageGroupIdentifier;              //@synthesize messageGroupIdentifier=_messageGroupIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * contentPages;                              //@synthesize contentPages=_contentPages - In the implementation block
@property (nonatomic,readonly) BOOL requiresCloseButton;                            //@synthesize requiresCloseButton=_requiresCloseButton - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSArray *)contentPages;
-(id)initWithICInAppMessageEntry:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 messageGroupIdentifier:(id)arg2 contentPages:(id)arg3 requiresCloseButton:(BOOL)arg4 ;
-(NSString *)messageGroupIdentifier;
-(BOOL)requiresCloseButton;
@end


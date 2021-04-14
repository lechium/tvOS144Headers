/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PeopleSuggester/_PSFeedbackAction.h>

@class NSString;

@interface _PSMapsFeedbackAction : _PSFeedbackAction {

	NSString* _contactId;
	NSString* _handle;

}

@property (nonatomic,copy,readonly) NSString * contactId;              //@synthesize contactId=_contactId - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                 //@synthesize handle=_handle - In the implementation block
+(id)engagementWithSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2 ;
+(id)engagementWithNonSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2 ;
-(NSString *)handle;
-(NSString *)contactId;
-(id)initWithContactIdentifier:(id)arg1 handle:(id)arg2 type:(long long)arg3 ;
@end


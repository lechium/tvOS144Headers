/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * reviewDate; 
@property (nonatomic,retain) SAUIDecoratedText * reviewText; 
@property (nonatomic,retain) SAUIDecoratedText * reviewer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userReviewItem;
+(id)userReviewItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)reviewer;
-(void)setReviewer:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(SAUIDecoratedText *)reviewDate;
-(void)setReviewDate:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)reviewText;
-(void)setReviewText:(SAUIDecoratedText *)arg1 ;
@end


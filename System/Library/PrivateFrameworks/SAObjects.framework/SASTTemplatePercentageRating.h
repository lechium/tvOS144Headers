/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SASTTemplateRating.h>

@class SAUILocalImageResource, SAUIDecoratedText;

@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (nonatomic,retain) SAUIDecoratedText * value; 
+(id)templatePercentageRating;
+(id)templatePercentageRatingWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIDecoratedText *)value;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
@end


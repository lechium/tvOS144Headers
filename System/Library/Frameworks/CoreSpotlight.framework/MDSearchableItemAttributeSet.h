/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpotlight/CSSearchableItemAttributeSet.h>

@class NSArray;

@interface MDSearchableItemAttributeSet : CSSearchableItemAttributeSet

@property (copy) NSArray * authorPersons; 
@property (copy) NSArray * primaryRecipientPersons; 
@property (copy) NSArray * recipients; 
+(BOOL)supportsSecureCoding;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setAuthorPersons:(NSArray *)arg1 ;
-(NSArray *)authorPersons;
-(void)setPrimaryRecipientPersons:(NSArray *)arg1 ;
-(NSArray *)primaryRecipientPersons;
@end


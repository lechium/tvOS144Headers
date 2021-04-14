/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate, NSArray;

@interface MWFeedItem : NSObject <NSCoding> {

	NSString* identifier;
	NSString* title;
	NSString* link;
	NSDate* date;
	NSDate* updated;
	NSString* summary;
	NSString* content;
	NSString* author;
	NSArray* enclosures;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * link; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSDate * updated; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSArray * enclosures; 
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)content;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setUpdated:(NSDate *)arg1 ;
-(NSDate *)updated;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)summary;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(NSArray *)enclosures;
-(void)setEnclosures:(NSArray *)arg1 ;
@end


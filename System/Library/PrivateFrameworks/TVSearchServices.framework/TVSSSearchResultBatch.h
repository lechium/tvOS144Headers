/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSearchServices/TVJSSearchResultBatch.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface TVSSSearchResultBatch : NSObject <TVJSSearchResultBatch, NSSecureCoding> {

	BOOL _finalBatch;
	NSArray* _contentItems;

}

@property (nonatomic,copy,readonly) NSArray * contentItems; 
@property (getter=isFinalBatch,nonatomic,readonly) BOOL finalBatch; 
@property (nonatomic,copy) NSArray * contentItems;                               //@synthesize contentItems=_contentItems - In the implementation block
@property (assign,getter=isFinalBatch,nonatomic) BOOL finalBatch;                //@synthesize finalBatch=_finalBatch - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentItems:(NSArray *)arg1 ;
-(NSArray *)contentItems;
-(BOOL)isFinalBatch;
-(void)setFinalBatch:(BOOL)arg1 ;
@end

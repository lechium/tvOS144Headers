/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TIAnalyticsFieldSpec.h>

@class NSArray;

@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec {

	NSArray* _allowedValues;

}

@property (nonatomic,readonly) NSArray * allowedValues;              //@synthesize allowedValues=_allowedValues - In the implementation block
-(id)initWithName:(id)arg1 allowedValues:(id)arg2 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(NSArray *)allowedValues;
@end


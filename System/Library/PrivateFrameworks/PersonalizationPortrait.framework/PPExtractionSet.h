/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _namedEntityRecords;
	NSArray* _topicRecords;

}

@property (nonatomic,readonly) NSArray * namedEntityRecords;              //@synthesize namedEntityRecords=_namedEntityRecords - In the implementation block
@property (nonatomic,readonly) NSArray * topicRecords;                    //@synthesize topicRecords=_topicRecords - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)merge:(id)arg1 ;
-(id)initWithNamedEntityRecords:(id)arg1 topicRecords:(id)arg2 ;
-(NSArray *)namedEntityRecords;
-(NSArray *)topicRecords;
@end


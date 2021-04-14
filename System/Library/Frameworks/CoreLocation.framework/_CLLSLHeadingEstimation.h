/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _CLLSLHeadingEstimation : NSObject <NSCopying, NSSecureCoding> {

	int _status;
	NSArray* _headings;

}

@property (assign,nonatomic) int status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSArray * headings;              //@synthesize headings=_headings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(NSArray *)headings;
-(void)setHeadings:(NSArray *)arg1 ;
@end

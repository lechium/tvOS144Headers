/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _cellId;
	NSNumber* _baseId;

}

@property (nonatomic,readonly) NSNumber * cellId;              //@synthesize cellId=_cellId - In the implementation block
@property (nonatomic,readonly) NSNumber * baseId;              //@synthesize baseId=_baseId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cellIdInfoFromCellId:(int)arg1 baseId:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)cellId;
-(NSNumber *)baseId;
@end


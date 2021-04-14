/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CPLLibraryState : NSObject <NSSecureCoding, NSCopying> {

	BOOL _disabled;
	NSDate* _disabledDate;
	NSDate* _deleteDate;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) NSDate * disabledDate;                          //@synthesize disabledDate=_disabledDate - In the implementation block
@property (nonatomic,copy) NSDate * deleteDate;                            //@synthesize deleteDate=_deleteDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(NSDate *)disabledDate;
-(NSDate *)deleteDate;
-(void)setDisabledDate:(NSDate *)arg1 ;
-(void)setDeleteDate:(NSDate *)arg1 ;
@end


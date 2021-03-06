/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IPAAdjustmentStack, NSString;

@interface IPAAdjustmentEnvelope : NSObject <NSCopying> {

	IPAAdjustmentStack* _adjustmentStack;
	NSString* _originator;
	NSString* _format;
	NSString* _formatVersion;

}

@property (nonatomic,retain) IPAAdjustmentStack * adjustmentStack;              //@synthesize adjustmentStack=_adjustmentStack - In the implementation block
@property (nonatomic,retain) NSString * originator;                             //@synthesize originator=_originator - In the implementation block
@property (nonatomic,retain) NSString * format;                                 //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * formatVersion;                          //@synthesize formatVersion=_formatVersion - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(void)setFormatVersion:(NSString *)arg1 ;
-(NSString *)formatVersion;
-(id)videoAdjustmentStack;
-(id)photoAdjustmentStack;
-(BOOL)containsPhotoAdjustments;
-(BOOL)containsVideoAdjustments;
-(IPAAdjustmentStack *)adjustmentStack;
-(void)setAdjustmentStack:(IPAAdjustmentStack *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIImageView.h>

@class NSString;

@interface PXDebug : UIImageView {

	CGImageRef _previewImage;
	CGColorRef _backgroundColor;
	NSString* _name;

}

@property (assign,nonatomic) CGImageRef previewImage;                 //@synthesize previewImage=_previewImage - In the implementation block
@property (assign,nonatomic) CGColorRef backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)layer;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGImageRef)previewImage;
-(void)setPreviewImage:(CGImageRef)arg1 ;
-(id)__dbg_formattedDisplayName;
-(id)__dbg_snapshotImage;
@end


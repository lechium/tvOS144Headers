/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class ISBundle, ISImageCache;

@interface ISBundleIcon : ISIcon {

	ISBundle* _bundle;
	ISImageCache* _imageCache;

}

@property (readonly) ISBundle * bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (retain) ISImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(ISBundle *)bundle;
-(ISImageCache *)imageCache;
-(void)setImageCache:(ISImageCache *)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(id)imageForImageDescriptor:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
@end


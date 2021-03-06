/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface FxPlugDescriptor : NSObject {

	FxPlugDescriptorPriv* _priv;

}
+(id)fxPlugDescriptorWithPROPlugIn:(void*)arg1 ;
+(id)fxPlugDescriptorWithFxMetaPlug:(id)arg1 ;
-(void)dealloc;
-(id)properties;
-(id)version;
-(id)displayName;
-(id)uuid;
-(id)flavor;
-(Class)plugInClass;
-(id)initWithPROPlugIn:(void*)arg1 ;
-(id)initWithFxMetaPlug:(id)arg1 ;
-(id)plugInTypeUUID;
-(id)metaPlug;
-(id)groupDescriptor;
-(BOOL)canDoGPU;
-(BOOL)requiresCoreImage;
@end


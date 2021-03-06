/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXLayoutPerformerOutput, NSArray;


@protocol PXLayoutPerformer
@property (assign,nonatomic) SCD_Struct_PX30 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
@property (nonatomic,readonly) NSArray * children; 
@required
+(CGSize*)performLayoutWithLayoutInput:(SCD_Struct_PX30)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(NSArray *)children;
-(void)prepareForReuse;
-(CGSize*)performLayout;
-(SCD_Struct_PX30)layoutInput;
-(void)setLayoutInput:(SCD_Struct_PX30)arg1;
-(PXLayoutPerformerOutput *)layoutOutput;
-(void)setLayoutOutput:(id)arg1;

@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HBMStoreCollection;


@protocol HBMDataSource <NSObject>
@property (assign,nonatomic,__weak) id<HBMDataSourceDelegate> delegate; 
@property (nonatomic,copy,readonly) HBMStoreCollection * collection; 
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly; 
@required
-(id<HBMDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(HBMStoreCollection *)collection;
-(BOOL)load:(id*)arg1;
-(BOOL)isReadOnly;

@end


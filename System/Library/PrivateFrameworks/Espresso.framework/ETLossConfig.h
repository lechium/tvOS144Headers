/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface ETLossConfig : NSObject {

	unsigned long long _mode;
	NSString* _loss_name;
	NSString* _output_name;
	NSString* _label_name;
	NSArray* _label_shape;
	NSString* _custom_network_path;

}

@property (assign) unsigned long long mode;                     //@synthesize mode=_mode - In the implementation block
@property (retain) NSString * loss_name;                        //@synthesize loss_name=_loss_name - In the implementation block
@property (retain) NSString * output_name;                      //@synthesize output_name=_output_name - In the implementation block
@property (retain) NSString * label_name;                       //@synthesize label_name=_label_name - In the implementation block
@property (retain) NSArray * label_shape;                       //@synthesize label_shape=_label_shape - In the implementation block
@property (retain) NSString * custom_network_path;              //@synthesize custom_network_path=_custom_network_path - In the implementation block
+(id)softmaxCrossEntropyLoss;
+(id)L2Loss;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(NSString *)loss_name;
-(NSString *)output_name;
-(NSArray *)label_shape;
-(NSString *)label_name;
-(void)setLoss_name:(NSString *)arg1 ;
-(void)setOutput_name:(NSString *)arg1 ;
-(void)setLabel_name:(NSString *)arg1 ;
-(void)setLabel_shape:(NSArray *)arg1 ;
-(NSString *)custom_network_path;
-(void)setCustom_network_path:(NSString *)arg1 ;
@end


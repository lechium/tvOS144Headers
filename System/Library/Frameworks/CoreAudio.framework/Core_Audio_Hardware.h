/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol Core_Audio_Hardware
@required
-(void)audio_object_get_property_info:(unsigned)arg1 token:(Device_Token)arg2 at:(AudioObjectPropertyAddress)arg3 reply:(/*^block*/id)arg4;
-(void)audio_object_get_property_data:(unsigned)arg1 token:(Device_Token)arg2 at:(AudioObjectPropertyAddress)arg3 with:(id)arg4 reply:(/*^block*/id)arg5;
-(void)audio_object_set_property_data:(unsigned)arg1 token:(Device_Token)arg2 at:(AudioObjectPropertyAddress)arg3 with:(id)arg4 value:(id)arg5 reply:(/*^block*/id)arg6;
-(void)add_property_listener:(id)arg1 reply:(/*^block*/id)arg2;
-(void)create_io_client_for_endpoint:(id)arg1 reply:(/*^block*/id)arg2;
-(void)create_device_for_client_io:(Transport_Token)arg1 with:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)handle_io_message:(Transport_Token)arg1 with:(Device_Token)arg2 incoming:(id)arg3 reply:(/*^block*/id)arg4;
-(void)create_aggregate_device:(id)arg1 reply:(/*^block*/id)arg2;
-(void)destroy_aggregate_device:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)ping:(int)arg1 reply:(/*^block*/id)arg2;
-(void)handle_io_message:(Transport_Token)arg1 with:(Device_Token)arg2 incoming:(id)arg3;

@end


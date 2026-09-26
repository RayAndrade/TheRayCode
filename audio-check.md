Yes, Ray. We are finished with the OBS audio setup. You played back a recording and confirmed that you could hear both your voice and YouTube. There is no reason to change the working audio settings now.

The unwanted Files windows and the earlier OBS crashes are not resolved. They are separate issues; they do not change the result of your successful recording test.

## OBS service checklist — Ubuntu / PD100X / YouTube

Purpose: Restore microphone and YouTube audio recording without repeating the entire troubleshooting process.

### 1. Before recording

* Open OBS and confirm that the preview shows your desktop.

* In Sources, confirm that `mic` is present.

* In the Audio Mixer, find the `mic` row:

  * Speaker icon: On (white; no X).

  * Headphones icon: Off (X). This is the setting that restored audible microphone audio in your recording.

  * Speak into the microphone and confirm that its meter moves.

* Leave the other sources and mixer channels unchanged. Do not delete or rename sources as part of this checklist.

### 2. Known working audio devices

|
OBS setting

|

Working selection

|
| --- | --- |
|

`mic` source → Device

|

`PD100X Podcast Microphone, USB Audio`

|
|

Settings → Audio → `Desktop Audio`

|

`Ryzen HD Audio Controller Analog Stereo`

|
|

Settings → Audio → Sample Rate

|

`48 kHz`

|
|

Settings → Audio → Channels

|

`Mono`

|

Important: `TEST - YouTube Audio` is not the confirmed source of the recorded YouTube sound. The confirmed desktop-audio setting is the global `Desktop Audio` device shown above. Do not change `TEST - YouTube Audio` while the current setup works.

### 3. Confirm the recording—not just the meters

1. Start a YouTube video.

2. Click Start Recording in OBS.

3. Speak into the PD100X while the video plays.

4. Click Stop Recording.

5. Play the resulting MP4 and confirm that you hear both your voice and YouTube.

A moving meter is not proof that sound was recorded. Playback is the final check.

### 4. If your voice is missing from the recording

Check the `mic` row first. Keep its speaker on and set its headphones icon to X (Monitor Off). Make another short recording and listen to it before changing anything else. This exact change restored your voice today.

### 5. If YouTube audio is missing

Check Settings → Audio → Desktop Audio. The working device is `Ryzen HD Audio Controller Analog Stereo`, not `PD100X Podcast Microphone Digital Stereo (IEC958)`. Make a short recording and listen to it before adjusting other channels.

### 6. If OBS crashes or Files windows appear

Do not remove sources, reset OBS, or repeatedly restart it while troubleshooting audio. OBS crashed during our earlier cleanup attempt, and the unwanted Files windows still appeared after reconnecting the keyboard’s USB receiver. We have not established the cause of either issue.

Working-state record — September 21, 2026: Desktop preview visible; `mic` speaker on; `mic` headphones off (X); microphone and YouTube both audible in the recorded MP4, as confirmed by your playback.

Bottom line: Your recording setup is working. Keep these settings, and use a short playback test before each important recording.

